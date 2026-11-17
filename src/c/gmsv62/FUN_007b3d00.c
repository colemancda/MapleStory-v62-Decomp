/* FUN_007b3d00 - 0x007b3d00 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007b3d00(char param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_00978368;
  if (param_1 == '\x01') {
    cVar1 = FUN_007b4547(DAT_00978368 + 0x29b4,*(undefined4 *)(DAT_00978368 + 0x29b8));
    cVar1 = cVar1 + -0x49;
  }
  else if (param_1 == '\x02') {
    cVar1 = FUN_007b4547(DAT_00978368 + 0x29b4,*(undefined4 *)(DAT_00978368 + 0x29b8));
    cVar1 = cVar1 + -0x46;
  }
  else if (param_1 == '\x03') {
    cVar1 = FUN_007b4547(DAT_00978368 + 0x29b4,*(undefined4 *)(DAT_00978368 + 0x29b8));
    cVar1 = cVar1 + -0x4c;
  }
  else {
    if (param_1 != '\x04') {
      return param_2;
    }
    cVar1 = FUN_007b4547(DAT_00978368 + 0x29b4,*(undefined4 *)(DAT_00978368 + 0x29b8));
    cVar1 = cVar1 + -0x53;
  }
  if (cVar1 == '\0') {
    iVar2 = FUN_00413367(iVar2 + 0x29bc,*(undefined4 *)(iVar2 + 0x29c4));
    param_2 = param_2 + (iVar2 * param_2) / -100;
  }
  return param_2;
}


