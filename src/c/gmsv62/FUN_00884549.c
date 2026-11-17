/* FUN_00884549 - 0x00884549 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00884549(uint param_1)

{
  ushort uVar1;
  int iVar2;
  ushort local_6;
  
  uVar1 = (ushort)param_1;
  if (uVar1 == 0xffff) {
    return param_1;
  }
  if (DAT_0098079c == 0) {
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if (uVar1 < 0x100) {
      iVar2 = FUN_00883a76(param_1,1);
      if (iVar2 == 0) {
        return param_1 & 0xffff;
      }
    }
    iVar2 = FUN_00885b02(DAT_0098079c,0x100,&param_1,1,&local_6,1,0);
    param_1 = param_1 & 0xffff;
    if (iVar2 != 0) {
      param_1 = (uint)local_6;
    }
  }
  return param_1;
}


