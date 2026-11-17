/* FUN_0045de83 - 0x0045de83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045de83(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (DAT_00978368 == 0) {
    pcVar3 = s_Unknown_Error__type1__009645f8;
  }
  else {
    iVar1 = FUN_0045ded1();
    if (iVar1 == 0) {
      uVar2 = FUN_0045e4b8();
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      pcVar3 = s_GM_can_not_transfer_worlds__009645b4;
    }
    else {
      pcVar3 = s_Guild_Master_can_not_transfer_wo_009645d0;
    }
  }
  FUN_00434e21(param_1,pcVar3);
  return 0;
}


