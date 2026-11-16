/* FUN_5080a471 - 0x5080a471 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void ** __fastcall FUN_5080a471(int *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  bool bVar3;
  
  pvVar1 = Self;
  LOCK();
  ppvVar2 = (void **)*param_1;
  bVar3 = ppvVar2 == (void **)0x0;
  if (bVar3) {
    *param_1 = (int)Self;
    ppvVar2 = (void **)0x0;
  }
  UNLOCK();
  if (!bVar3) {
    if (ppvVar2 == pvVar1) {
      param_1[1] = param_1[1] + 1;
      ppvVar2 = (void **)0x0;
    }
    return ppvVar2;
  }
  param_1[1] = 1;
  return ppvVar2;
}


