using UnityEngine;
using UnityEditor;

public class PrefixAdder : ScriptableWizard {
    [SerializeField] string prefix;
    [SerializeField] string subfix;

    [MenuItem("UITools/PreFix Subfix Adder", true)]
    static bool CreateWizardValidator() {
        Transform[] transforms = Selection.GetTransforms(SelectionMode.ExcludePrefab);
        return transforms.Length >= 1;
    }

    [MenuItem("UITools/PreFix Subfix Adder", false)]
    static void CreateWizard() {
        ScriptableWizard.DisplayWizard("Prefix and Subfix Adder", typeof(PrefixAdder), "リネームして閉じる",
            "リネーム");
    }

    void OnWizardCreate() {
        ApplyPrefix();
    }

    void ApplyPrefix() {
        GameObject[] gos = Selection.gameObjects;
        foreach (GameObject go in gos) {
            var parent = go.GetComponentInParent(typeof(Transform));
            var children = go.GetComponentsInChildren(typeof(Transform));

            //子のリネーム
            foreach (Transform child in children) {
                Undo.RegisterCompleteObjectUndo(child.gameObject,
                    "Added: " + (string.IsNullOrEmpty(prefix) ? "" : prefix + " ") +
                    (string.IsNullOrEmpty(subfix) ? "" : subfix));

                // Don't apply to root object.
                if (child == go.transform)
                    continue;


                if (!string.IsNullOrEmpty(prefix)) {
                    child.name = prefix + child.name;
                }
                if (!string.IsNullOrEmpty(subfix)) {
                    child.name = child.name + subfix;
                }
            }

            //親のリネーム
            if (!string.IsNullOrEmpty(prefix)) {
                parent.name = prefix + parent.name;
            }
            if (!string.IsNullOrEmpty(subfix)) {
                parent.name = parent.name + subfix;
            }

        }
    }

    void OnWizardOtherButton() {
        ApplyPrefix();
    }

    void OnWizardUpdate() {
        Transform[] transforms = Selection.GetTransforms(SelectionMode.ExcludePrefab);
        helpString = "Objects selected: " + transforms.Length;
        errorString = "";
        isValid = true;

        if (transforms.Length < 1) {
            errorString += "No object selected to rename";
        }
        isValid = string.IsNullOrEmpty(errorString);

    }

    void OnSelectionChange() {
        OnWizardUpdate();
    }
}
