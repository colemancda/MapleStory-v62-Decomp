/* FUN_00833b6e - 0x00833b6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00833b6e(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\0') {
    uVar3 = FUN_00679d22(unaff_EBP + 8,0x9f4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar3 = FUN_00414f8b(uVar3);
    FUN_00414f8b(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  else {
    uVar3 = FUN_0042459a();
    iVar4 = FUN_0042459a();
    FUN_007b3e16(uVar3,iVar4);
    if (iVar4 == 1) {
      FUN_007b3f86();
    }
    FUN_007b404b(uVar3,0);
    if (DAT_0097bd70 != 0) {
      FUN_006e4f45();
    }
    puVar5 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x14,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + 8,0x9f3);
    uVar3 = *puVar5;
    uVar1 = *puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  FUN_00471102(unaff_EBP + -0x10,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


