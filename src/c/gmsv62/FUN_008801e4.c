/* FUN_008801e4 - 0x008801e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008801e4(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (DAT_0098224c == 3) {
    if (param_1 < 0x3f9) {
      DAT_00982244 = param_1;
      return 1;
    }
  }
  else if (DAT_0098224c == 2) {
    uVar2 = param_1 + 0xf & 0xfffffff0;
    if (uVar2 < 0x781) {
      DAT_00972454 = uVar2;
      return 1;
    }
  }
  else if ((DAT_0098224c == 1) && (param_1 != 0)) {
    FUN_0087ff4b(&param_1);
    if ((byte)param_1 < 6) {
      uVar2 = uVar2 + 0xf & 0xfffffff0;
      if ((uVar2 < 0x781) && (iVar1 = FUN_00881200(), iVar1 != 0)) {
        DAT_00972454 = uVar2;
        DAT_0098224c = 2;
        return 1;
      }
    }
    else if ((uVar2 < 0x3f9) && (iVar1 = FUN_00880297(uVar2), iVar1 != 0)) {
      DAT_00982244 = uVar2;
      DAT_0098224c = 3;
      return 1;
    }
  }
  return 0;
}


