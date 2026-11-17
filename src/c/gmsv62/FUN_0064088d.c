/* FUN_0064088d - 0x0064088d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064088d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x6bb);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = 0;
  while( true ) {
    FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8),iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iVar4 = FUN_006407e8(*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar4 == 0) break;
    iVar3 = iVar3 * 2;
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x6bb);
    uVar2 = *puVar1;
    iVar4 = iVar3 + -1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  iVar4 = iVar3 / 2;
  iVar3 = iVar3 + -1;
  *(int *)(unaff_EBP + -0x18) = iVar4;
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (iVar3 < iVar4) {
LAB_0064098a:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return *(undefined4 *)(unaff_EBP + -0x1c);
  }
  do {
    iVar3 = (iVar4 + iVar3) / 2;
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x6bb);
    uVar2 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8),iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iVar4 = FUN_006407e8(*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar4 == 0) {
      if (*(int *)(unaff_EBP + -0x18) == *(int *)(unaff_EBP + -0x14)) {
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x18);
        goto LAB_0064098a;
      }
      *(int *)(unaff_EBP + -0x14) = iVar3;
    }
    else {
      *(int *)(unaff_EBP + -0x18) = iVar3 + 1;
    }
    if (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x18)) goto LAB_0064098a;
    iVar4 = *(int *)(unaff_EBP + -0x18);
    iVar3 = *(int *)(unaff_EBP + -0x14);
  } while( true );
}


