/* FUN_50408201 - 0x50408201 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50408201(undefined4 *param_1,int param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_504081bc(param_3);
  pcVar2 = &DAT_5042d64c + iVar1 * 0xf;
  iVar1 = 5;
  do {
    if (*pcVar2 != '\0') {
      *param_1 = param_4;
    }
    pcVar3 = pcVar2 + 2;
    if (pcVar2[1] != '\0') {
      param_1[1] = param_4;
    }
    pcVar2 = pcVar2 + 3;
    if (*pcVar3 != '\0') {
      param_1[2] = param_4;
    }
    param_1 = (undefined4 *)((int)(param_1 + 2) + param_2 + -8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


