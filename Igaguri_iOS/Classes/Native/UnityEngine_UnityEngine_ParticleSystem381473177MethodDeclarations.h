﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t4269758102;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel4269758102.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m594025146 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m1237476160 (ParticleSystem_t381473177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1637509303 (ParticleSystem_t381473177 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m2232250723 (ParticleSystem_t381473177 * __this, bool ___recurse0, IteratorDelegate_t4269758102 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m389741621 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, IteratorDelegate_t4269758102 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m745236472 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
