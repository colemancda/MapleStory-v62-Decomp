/* FUN_0080bb5a - 0x0080bb5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0080bb5a(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5e0) == 0) {
    FUN_008162ff();
    *(int *)(param_1 + 0x5f8) = *(int *)(param_1 + 0x5f8) + 1;
    if ((*(int *)(param_1 + 0x5f4) < *(int *)(param_1 + 0x5f8)) && (*(int *)(param_1 + 0x59c) != 0))
    {
      FUN_008161f1(0);
      *(undefined4 *)(param_1 + 0x5f8) = 0;
      if (DAT_0097c1ac == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar1 = FUN_0080ce6a();
      if (uVar1 < 0xdad) {
        *(int *)(param_1 + 0x5f4) = *(int *)(param_1 + 0x5f4) + 1;
        iVar2 = *(int *)(param_1 + 0x5f4);
        if (0xf < iVar2) {
          iVar2 = 0x10;
        }
      }
      else {
        *(int *)(param_1 + 0x5f4) = *(int *)(param_1 + 0x5f4) + -1;
        iVar2 = *(int *)(param_1 + 0x5f4);
        if (iVar2 < 2) {
          iVar2 = 1;
        }
      }
      *(int *)(param_1 + 0x5f4) = iVar2;
    }
  }
  return;
}


