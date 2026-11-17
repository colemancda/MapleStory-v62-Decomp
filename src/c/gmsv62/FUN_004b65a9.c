/* FUN_004b65a9 - 0x004b65a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b65a9(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00457d37();
  iVar2 = 0;
  FUN_00414f8b(param_1 + 4);
  FUN_00459cb5();
  do {
    uVar1 = FUN_004726fc();
    FUN_00414f8b(uVar1);
    FUN_00459cb5();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + -4);
  }
  FUN_00457cda();
  if (0 < iVar2) {
    FUN_00457fa0(*(undefined4 *)(param_1 + 0xc));
    FUN_00457fa0(*(undefined4 *)(param_1 + 0x10));
  }
  FUN_00457d37();
  FUN_0045d247();
  FUN_00457cda();
  FUN_0045d247();
  FUN_00457cda();
  FUN_00414f8b(param_1 + 0x1e);
  FUN_00459cb5();
  FUN_00457d37();
  FUN_00457d37();
  return;
}


