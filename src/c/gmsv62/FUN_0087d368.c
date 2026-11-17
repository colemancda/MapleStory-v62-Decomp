/* FUN_0087d368 - 0x0087d368 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087d368(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_0087a007(param_1);
    pvVar2 = _malloc(iVar1 * 2 + 2);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0087d1db(pvVar2,param_1);
      return uVar3;
    }
  }
  return 0;
}


