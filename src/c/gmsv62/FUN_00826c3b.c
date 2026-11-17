/* FUN_00826c3b - 0x00826c3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00826c3b(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_009784c4;
  FUN_00475195();
  FUN_00473a03();
LAB_00826c84:
  do {
    iVar2 = (*DAT_0097b5e0)(unaff_EBP + -0x30,0,0,0,1);
    if (iVar2 == 0) {
LAB_00826cea:
      iVar2 = (*DAT_0097b704)();
      if (iVar2 != *(int *)(iVar1 + 0x38) && -1 < iVar2 - *(int *)(iVar1 + 0x38)) {
LAB_00826d00:
        FUN_00473da9(0);
      }
    }
    else {
      if (*(int *)(unaff_EBP + -0x2c) != 0x401) {
        (*DAT_0097b528)(unaff_EBP + -0x30);
        (*DAT_0097b524)(unaff_EBP + -0x30);
        goto LAB_00826cea;
      }
      if (*(int *)(unaff_EBP + -0x28) != *(int *)(iVar1 + 8)) goto LAB_00826c84;
      uVar3 = *(uint *)(unaff_EBP + -0x24) >> 0x10;
      if (uVar3 != 0) {
        if (uVar3 != 0x2736) goto LAB_00826d00;
        goto LAB_00826c84;
      }
      if ((*(short *)(unaff_EBP + -0x24) != 0x10) && (*(short *)(unaff_EBP + -0x24) != 1))
      goto LAB_00826d00;
      iVar2 = FUN_00473da9(1);
      if (iVar2 != 0) goto LAB_00826d12;
    }
    if (*(int *)(unaff_EBP + -0x2c) == 0x12) {
LAB_00826d12:
      if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != -1)) {
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0x22000001;
      *(undefined4 *)(unaff_EBP + -0x10) = 0x22000001;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
    }
  } while( true );
}


