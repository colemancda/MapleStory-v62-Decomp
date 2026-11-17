/* FUN_00673afd - 0x00673afd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void * __fastcall FUN_00673afd(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  
  pvVar1 = Self;
  LOCK();
  pvVar2 = (void *)*param_1;
  bVar3 = pvVar2 == (void *)0x0;
  if (bVar3) {
    *param_1 = (int)Self;
    pvVar2 = (void *)0x0;
  }
  UNLOCK();
  if (!bVar3) {
    if (pvVar2 == pvVar1) {
      param_1[1] = param_1[1] + 1;
      pvVar2 = (void *)0x0;
    }
    return pvVar2;
  }
  param_1[1] = 1;
  return pvVar2;
}


