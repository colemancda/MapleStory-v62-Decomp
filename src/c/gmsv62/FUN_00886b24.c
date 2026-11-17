/* FUN_00886b24 - 0x00886b24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00886b24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00982008);
  bVar2 = DAT_00982004 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_00982008);
    FUN_0087d9ec(0x13);
  }
  uVar1 = FUN_00886b81(param_1,param_2,param_3);
  if (bVar2) {
    FUN_0087da4d(0x13);
  }
  else {
    InterlockedDecrement(&DAT_00982008);
  }
  return uVar1;
}


