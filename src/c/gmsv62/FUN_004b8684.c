/* FUN_004b8684 - 0x004b8684 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b8684(int param_1)

{
  int *piVar1;
  int iStack00000004;
  
  FUN_00457cda(*(undefined1 *)(param_1 + 0xc));
  FUN_00457cda(*(undefined1 *)(param_1 + 0xd));
  FUN_00457d37(*(undefined4 *)(param_1 + 0x11));
  FUN_00457cda(0);
  FUN_00457d37(*(undefined4 *)(param_1 + 0x19));
  iStack00000004 = 1;
  piVar1 = (int *)(param_1 + 0x1d);
  do {
    if ((*piVar1 != 0) && (iStack00000004 != 0)) {
      FUN_00457cda(iStack00000004);
      FUN_00457d37(*piVar1);
    }
    iStack00000004 = iStack00000004 + 1;
    piVar1 = piVar1 + 1;
  } while (iStack00000004 < 0x31);
  FUN_00457cda(0xff);
  iStack00000004 = 1;
  piVar1 = (int *)(param_1 + 0xe1);
  do {
    if ((*piVar1 != 0) && (iStack00000004 != 0)) {
      FUN_00457cda(iStack00000004);
      FUN_00457d37(*piVar1);
    }
    iStack00000004 = iStack00000004 + 1;
    piVar1 = piVar1 + 1;
  } while (iStack00000004 < 0x31);
  FUN_00457cda(0xff);
  FUN_00457d37(*(undefined4 *)(param_1 + 0x15));
  FUN_00457fa0(param_1 + 0x1a1,0xc);
  return;
}


