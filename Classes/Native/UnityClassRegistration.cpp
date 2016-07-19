struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 83 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//11. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//18. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//19. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//24. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//25. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//26. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//27. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//28. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//29. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//30. ParticleAnimator
	void RegisterClass_ParticleAnimator();
	RegisterClass_ParticleAnimator();

	//31. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//32. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//35. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//38. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//39. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//42. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//43. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//44. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//45. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//46. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//47. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//48. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//49. EllipsoidParticleEmitter
	void RegisterClass_EllipsoidParticleEmitter();
	RegisterClass_EllipsoidParticleEmitter();

	//50. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//51. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//52. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//53. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//54. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//55. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//56. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//57. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//58. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//59. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//60. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//61. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//62. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//63. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//64. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//65. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//66. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//67. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//68. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//69. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//70. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//71. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//72. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//73. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//76. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//77. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//78. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//79. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//80. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//81. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//82. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
