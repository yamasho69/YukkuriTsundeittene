using System.Reflection;
using UnityEditor;
using UnityEngine;

public static class LockInspector {
    [MenuItem("Tools/Toggle Inspector Lock %l")]
    private static void ToggleLock() {
        var tracker = ActiveEditorTracker.sharedTracker;
        tracker.isLocked = !tracker.isLocked;
        tracker.ForceRebuild();
    }

    [MenuItem("Tools/Toggle Inspector Debug %k")]
    private static void ToggleDebugMode() {
        var window = Resources.FindObjectsOfTypeAll<EditorWindow>();
        var inspectorWindow = ArrayUtility.Find(window, c => c.GetType().Name == "InspectorWindow");

        if (inspectorWindow == null) return;

        var inspectorType = inspectorWindow.GetType();
        var tracker = ActiveEditorTracker.sharedTracker;
        var isNormal = tracker.inspectorMode == InspectorMode.Normal;
        var methodName = isNormal ? "SetDebug" : "SetNormal";

        var methodInfo = inspectorType.GetMethod(methodName, BindingFlags.NonPublic | BindingFlags.Instance);
        methodInfo.Invoke(inspectorWindow, null);
        tracker.ForceRebuild();
    }
}