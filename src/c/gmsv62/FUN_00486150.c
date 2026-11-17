/* FUN_00486150 - 0x00486150 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00486150(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &DAT_00964178;
  piVar1 = &DAT_00964178;
  do {
    *(undefined4 *)(param_1 + 0x23c + *piVar1 * 8) = 0;
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x964188);
  do {
    FUN_00486191(*(undefined4 *)(param_1 + 0xa5 + *piVar2 * 4),0,0);
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x964188);
  return;
}


