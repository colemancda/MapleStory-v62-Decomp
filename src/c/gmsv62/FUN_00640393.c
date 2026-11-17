/* FUN_00640393 - 0x00640393 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00640393(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0087a1b0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00640580(unaff_EBP + -0x10);
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    *(undefined2 *)(unaff_EBP + -0x38) = 0x4013;
    uVar1 = FUN_004029b9(0x1d4c00);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
    (*DAT_0097b56c)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x28);
    (*DAT_0097b59c)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x28);
    if (DAT_0097c1ac == (int *)0x0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = (**(code **)(*DAT_0097c1ac + 0x5c))
                      (DAT_0097c1ac,*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),0x1d4c00,
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x18));
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00475c07(0x15f900,unaff_EBP + 0xb);
      puVar4 = *(undefined1 **)(unaff_EBP + -0x18);
      puVar3 = *(undefined1 **)(unaff_EBP + -0x14);
      iVar2 = 480000;
      do {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_00402b41(*(undefined4 *)(unaff_EBP + -0x18));
      _memset((void *)(unaff_EBP + -0x4ea0),0,0x4e68);
      iVar2 = ijlInit(unaff_EBP + -0x4ea0);
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x4e9c) = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -0x4e8c) = 3;
        *(undefined4 *)(unaff_EBP + -0x4e68) = 3;
        *(undefined4 *)(unaff_EBP + -0x4e6c) = 3;
        *(undefined4 *)(unaff_EBP + -0x4e88) = 2;
        *(undefined4 *)(unaff_EBP + -0x4e98) = 800;
        *(undefined4 *)(unaff_EBP + -0x4e94) = 600;
        *(undefined4 *)(unaff_EBP + -0x4e90) = 0;
        *(undefined4 *)(unaff_EBP + -0x4e80) = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x4e74) = 800;
        *(undefined4 *)(unaff_EBP + -0x4e70) = 600;
        *(undefined4 *)(unaff_EBP + -0x4e64) = 1;
        *(undefined4 *)(unaff_EBP + -0x4e50) = 0x4b;
        iVar2 = ijlWrite(unaff_EBP + -0x4ea0,8);
        if (iVar2 == 0) {
          iVar2 = ijlFree(unaff_EBP + -0x4ea0);
          if (iVar2 == 0) {
            (*DAT_0097b5d4)(0);
          }
        }
        else {
          ijlFree(unaff_EBP + -0x4ea0);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


