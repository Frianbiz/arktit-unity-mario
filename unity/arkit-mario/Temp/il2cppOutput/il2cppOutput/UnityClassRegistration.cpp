template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. Renderer
	RegisterClass<Renderer>();
	//9. GUILayer
	RegisterClass<GUILayer>();
	//10. Light
	RegisterClass<Light>();
	//11. Mesh
	RegisterClass<Mesh>();
	//12. NamedObject
	RegisterClass<NamedObject>();
	//13. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//14. Shader
	RegisterClass<Shader>();
	//15. Material
	RegisterClass<Material>();
	//16. Sprite
	RegisterClass<Sprite>();
	//17. Texture
	RegisterClass<Texture>();
	//18. Texture2D
	RegisterClass<Texture2D>();
	//19. RenderTexture
	RegisterClass<RenderTexture>();
	//20. Transform
	RegisterClass<Transform>();
	//21. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//22. ParticleSystem
	RegisterClass<ParticleSystem>();
	//23. Rigidbody
	RegisterClass<Rigidbody>();
	//24. Unity::Joint
	RegisterClass<Unity::Joint>();
	//25. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//26. Collider
	RegisterClass<Collider>();
	//27. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//28. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//29. AudioClip
	RegisterClass<AudioClip>();
	//30. SampleClip
	RegisterClass<SampleClip>();
	//31. Animation
	RegisterClass<Animation>();
	//32. Animator
	RegisterClass<Animator>();
	//33. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//34. GUIElement
	RegisterClass<GUIElement>();
	//35. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//36. UI::Canvas
	RegisterClass<UI::Canvas>();
	//37. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//38. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//39. MeshRenderer
	RegisterClass<MeshRenderer>();
	//40. MeshCollider
	RegisterClass<MeshCollider>();
	//41. MeshFilter
	RegisterClass<MeshFilter>();
	//42. PreloadData
	RegisterClass<PreloadData>();
	//43. Cubemap
	RegisterClass<Cubemap>();
	//44. Texture3D
	RegisterClass<Texture3D>();
	//45. Texture2DArray
	RegisterClass<Texture2DArray>();
	//46. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//47. TimeManager
	RegisterClass<TimeManager>();
	//48. AudioManager
	RegisterClass<AudioManager>();
	//49. InputManager
	RegisterClass<InputManager>();
	//50. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//51. TextAsset
	RegisterClass<TextAsset>();
	//52. PhysicsManager
	RegisterClass<PhysicsManager>();
	//53. TagManager
	RegisterClass<TagManager>();
	//54. ScriptMapper
	RegisterClass<ScriptMapper>();
	//55. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//56. MonoScript
	RegisterClass<MonoScript>();
	//57. MonoManager
	RegisterClass<MonoManager>();
	//58. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//59. PlayerSettings
	RegisterClass<PlayerSettings>();
	//60. BuildSettings
	RegisterClass<BuildSettings>();
	//61. ResourceManager
	RegisterClass<ResourceManager>();
	//62. NetworkManager
	RegisterClass<NetworkManager>();
	//63. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//64. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//65. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//66. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//67. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//68. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//69. LevelGameManager
	RegisterClass<LevelGameManager>();
	//70. BoxCollider
	RegisterClass<BoxCollider>();
	//71. AnimationClip
	RegisterClass<AnimationClip>();
	//72. Motion
	RegisterClass<Motion>();
	//73. AudioListener
	RegisterClass<AudioListener>();
	//74. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//75. Avatar
	RegisterClass<Avatar>();
	//76. AnimatorController
	RegisterClass<AnimatorController>();
	//77. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//78. RenderSettings
	RegisterClass<RenderSettings>();
	//79. FlareLayer
	RegisterClass<FlareLayer>();
	//80. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//81. SphereCollider
	RegisterClass<SphereCollider>();
	//82. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//83. LightmapSettings
	RegisterClass<LightmapSettings>();
	//84. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//85. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
