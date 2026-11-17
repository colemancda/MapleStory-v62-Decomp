/* FUN_006e614e - 0x006e614e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006e614e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_1 + 0xac8;
  do {
    iVar2 = (iVar3 % 5) * 0x21;
    iVar1 = (iVar3 / 5) * 0x2d;
    (*DAT_0097b504)(iVar4,iVar2 + 8,iVar1 + 0x1f,iVar2 + 0x23,iVar1 + 0x45);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar3 < 0x19);
  iVar4 = 0;
  param_1 = param_1 + 0xc58;
  do {
    iVar3 = (iVar4 % 4) * 0x24;
    iVar1 = (iVar4 / 4) * 0x24;
    (*DAT_0097b504)(param_1,iVar3 + 0x26,iVar1 + 0x3c,iVar3 + 0x46,iVar1 + 0x5c);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x10;
  } while (iVar4 < 0x14);
  return;
}


