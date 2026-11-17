/* FUN_00598c5f - 0x00598c5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00598c5f(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc) != 0) {
    puVar1 = *(undefined4 **)(extraout_ECX + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = puVar1[1];
    *(undefined4 *)(unaff_EBP + -0x14) = puVar1[2];
    iVar3 = DAT_00978358;
    iVar2 = FUN_004bed04();
    if (((iVar2 == 0) || (*(int *)(unaff_EBP + -0x1c) == 0x406849)) && (DAT_00979178 == 0)) {
      iVar2 = FUN_007b8688(*(undefined4 *)(unaff_EBP + -0x1c));
      if ((iVar2 != 0) || (*(int *)(iVar3 + 0x1ed8) != 0)) {
        if ((*(int *)(unaff_EBP + -0x14) != 0) &&
           (iVar3 = *(int *)(unaff_EBP + -0x18) * 0x1d,
           *(int *)(*(int *)(extraout_ECX + 0x2c) + 0x19 + iVar3) == 0)) {
          iVar2 = FUN_00429303();
          if ((iVar2 != 0) && (*(char *)(DAT_00978368 + 0x2058) == '\0')) {
            iVar2 = *(int *)(extraout_ECX + 0x2c);
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            FUN_00414edd(iVar2 + 0xc + iVar3,0xffffffff);
            iVar3 = unaff_EBP + -0x10;
            uVar4 = 1;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_00429303(iVar3,1);
            FUN_004e8755(iVar3,uVar4);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00414ebb();
          }
        }
        *(undefined4 *)(extraout_ECX + 0x18) = 0;
        FUN_00599193(*(undefined4 *)(extraout_ECX + 0x10));
        FUN_00419015();
        goto LAB_00598d53;
      }
    }
    *(int *)(extraout_ECX + 0x18) = *(int *)(extraout_ECX + 0x18) + 0x1e;
    if (4000 < *(int *)(extraout_ECX + 0x18)) {
      FUN_00598d62();
    }
  }
LAB_00598d53:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


