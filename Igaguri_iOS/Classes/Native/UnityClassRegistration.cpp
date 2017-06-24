struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 72 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//5. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//6. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//7. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//8. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//9. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//10. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//11. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//12. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//13. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//14. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//15. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//23. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//24. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//25. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//26. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//27. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//28. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//29. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//30. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//31. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//32. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//33. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//34. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//35. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//36. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//37. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//38. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//39. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//40. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//43. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//44. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//45. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//46. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//47. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//48. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//49. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//50. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//51. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//52. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//53. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//54. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//55. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//56. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//57. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//58. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//59. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//60. Tree
	void RegisterClass_Tree();
	RegisterClass_Tree();

	//61. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//62. LODGroup
	void RegisterClass_LODGroup();
	RegisterClass_LODGroup();

	//63. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//64. BillboardAsset
	void RegisterClass_BillboardAsset();
	RegisterClass_BillboardAsset();

	//65. BillboardRenderer
	void RegisterClass_BillboardRenderer();
	RegisterClass_BillboardRenderer();

	//66. SpeedTreeWindAsset
	void RegisterClass_SpeedTreeWindAsset();
	RegisterClass_SpeedTreeWindAsset();

	//67. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//68. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//69. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//70. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//71. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
