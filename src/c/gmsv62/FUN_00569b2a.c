/* FUN_00569b2a - 0x00569b2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00569b2a(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0x100;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x9c5);
  uVar4 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = (*DAT_0097b6a8)(0x80000002,uVar4,0,0,0,0xf,0,unaff_EBP + -0x18,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb91);
    uVar4 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar3 = (*DAT_0097b6b8)(*(undefined4 *)(unaff_EBP + -0x18),uVar4,0,unaff_EBP + -0x14,
                            unaff_EBP + -0x124,unaff_EBP + -0x20);
    if ((iVar3 == 0) && (*(int *)(unaff_EBP + -0x14) == 1)) {
      iVar3 = FUN_0087bd4a(unaff_EBP + -0x124,&DAT_00965728);
      if (iVar3 != 0) goto LAB_00569bf3;
      bVar1 = false;
    }
    else {
LAB_00569bf3:
      bVar1 = true;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (!bVar1) {
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb8f);
      uVar4 = *puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iVar3 = (*DAT_0097b6b8)(*(undefined4 *)(unaff_EBP + -0x18),uVar4,0,unaff_EBP + -0x14,
                              unaff_EBP + -0x324,unaff_EBP + -0x1c);
      if ((iVar3 != 0) || (*(int *)(unaff_EBP + -0x14) != 4)) {
        bVar1 = true;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      if (!bVar1) {
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0xb90);
        uVar4 = *puVar2;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        iVar3 = (*DAT_0097b6b8)(*(undefined4 *)(unaff_EBP + -0x18),uVar4,0,unaff_EBP + -0x14,
                                unaff_EBP + -0x224,unaff_EBP + -0x1c);
        if ((iVar3 != 0) || (*(int *)(unaff_EBP + -0x14) != 4)) {
          bVar1 = true;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        if (!bVar1) {
          iVar3 = FUN_0087bd4a(unaff_EBP + -0x324,unaff_EBP + -0x224);
          if (iVar3 == 0) {
            uVar4 = 1;
            goto LAB_00569cd5;
          }
        }
      }
    }
    (*DAT_0097b6ac)(*(undefined4 *)(unaff_EBP + -0x18));
  }
  uVar4 = 0;
LAB_00569cd5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


