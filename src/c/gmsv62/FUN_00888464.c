/* FUN_00888464 - 0x00888464 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00888464(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_7c [120];
  
  uVar1 = FUN_00888707(param_1);
  iVar2 = (*DAT_0098092c)(uVar1,(-(uint)(DAT_00980910 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00980924 = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_008858f0(DAT_00980920,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_0088856a(uVar1);
      if (iVar2 != 0) {
        DAT_00980924 = DAT_00980924 | 4;
        DAT_0098090c = uVar1;
        DAT_00980928 = uVar1;
      }
    }
    uVar3 = ~DAT_00980924 >> 2 & 1;
  }
  return uVar3;
}


