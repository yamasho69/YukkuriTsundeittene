using UnityEditor;
using UnityEngine;

[InitializeOnLoad]

public class AlternatelyHierarchyColor : MonoBehaviour {
    private const int ROW_HEIGHT = 16;
    private const int OFFSET_Y = -4;

    private static readonly Color COLOR = new Color(0, 0, 0, 0.08f);

    static AlternatelyHierarchyColor() {
        EditorApplication.hierarchyWindowItemOnGUI += OnGUI;
    }

    private static void OnGUI(int instanceID, Rect rect) {
        var index = (int)(rect.y + OFFSET_Y) / ROW_HEIGHT;

        if (index % 2 == 0) return;

        var xMax = rect.xMax;

        rect.x = 32;
        rect.xMax = xMax + 16;

        EditorGUI.DrawRect(rect, COLOR);
    }
}
