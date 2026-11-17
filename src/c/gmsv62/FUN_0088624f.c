/* FUN_0088624f - 0x0088624f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0088624f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00982008);
  bVar2 = DAT_00982004 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_00982008);
    FUN_0087d9ec(0x13);
  }
  uVar1 = FUN_008862a8(param_1,param_2);
  if (bVar2) {
    FUN_0087da4d(0x13);
  }
  else {
    InterlockedDecrement(&DAT_00982008);
  }
  return uVar1;
}


