using UnityEngine;
using UnityEditor;

public class GameObjectAddNumber : MonoBehaviour {
    [MenuItem("UITools/˜A”Ô‚ð’Ç‰Á", false, 1)]

    static void AddNumber(MenuCommand command) {
        string number = "1";

        foreach (GameObject obj in Selection.gameObjects) {
            Undo.RegisterCompleteObjectUndo(obj, "Undo Add Number");

            int sibling = obj.transform.GetSiblingIndex();

            obj.name = string.Format("{0}{1}", obj.name + "_", (int.Parse(number) + sibling).ToString());
        }
    }
}