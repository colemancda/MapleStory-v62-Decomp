/* FUN_00878970 - 0x00878970 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00878970(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = 8;
    uVar1 = uVar3;
    do {
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xedb88320;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_1 = uVar1;
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 1;
  } while ((int)uVar3 < 0x100);
  return;
}


