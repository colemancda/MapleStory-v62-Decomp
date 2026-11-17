/* FUN_0060f93c - 0x0060f93c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060f93c(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  int local_24;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x188) != 0) {
    local_24 = 0;
    FUN_0060142b(0x6f,0);
    local_24 = 0x1c;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda();
    if (*(int *)(DAT_00978134 + 0x90) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_00978134 + 0x90) + -4);
    }
    local_24 = iVar2;
    FUN_0045d247();
    iVar3 = 0;
    if (0 < (short)iVar2) {
      do {
        local_24 = iVar3;
        FUN_004f14ee();
        uVar1 = FUN_004726fc();
        *(int **)(unaff_EBP + -0x10) = &local_24;
        local_24 = 0;
        FUN_00414f8b(uVar1);
        FUN_00459cb5();
        iVar3 = iVar3 + 1;
      } while (iVar3 < (short)iVar2);
    }
    local_24 = unaff_EBP + -0x20;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_24 = 0x60f9e4;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


