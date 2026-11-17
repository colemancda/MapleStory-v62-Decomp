/* FUN_0049fdae - 0x0049fdae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0049fdae(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x14);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  return;
}


