/* FUN_5040273f - 0x5040273f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ** __fastcall FUN_5040273f(int *param_1)

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


