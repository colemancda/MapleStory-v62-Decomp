/* FUN_00499e9b - 0x00499e9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00499e9b(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
  }
  else if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  FUN_004b3daf();
  return;
}


