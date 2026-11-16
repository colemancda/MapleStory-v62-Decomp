/* FUN_10008f60 - 0x10008f60 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ** __fastcall FUN_10008f60(int *param_1)

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


