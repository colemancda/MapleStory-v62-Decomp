/* FUN_008839ff - 0x008839ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_008839ff(uint param_1)

{
  ushort uVar1;
  int iVar2;
  ushort local_6;
  
  uVar1 = (ushort)param_1;
  if (uVar1 == 0xffff) {
    return param_1;
  }
  if (DAT_0098079c == 0) {
    if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
      return param_1 + 0xffe0;
    }
  }
  else {
    if (uVar1 < 0x100) {
      iVar2 = FUN_00883a76(param_1,2);
      if (iVar2 == 0) {
        return param_1 & 0xffff;
      }
    }
    iVar2 = FUN_00885b02(DAT_0098079c,0x200,&param_1,1,&local_6,1,0);
    param_1 = param_1 & 0xffff;
    if (iVar2 != 0) {
      param_1 = (uint)local_6;
    }
  }
  return param_1;
}


