/* FUN_00570fdc - 0x00570fdc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00570fdc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    iVar3 = *(int *)(unaff_EBP + 8);
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x60) + 0x160);
    if (iVar3 == 9) {
      if (*(int *)(extraout_ECX + 200) != 0) {
        iVar3 = FUN_007d1e08();
        *(int *)(extraout_ECX + 0xcc) = iVar3 + 1000;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
        iVar3 = FUN_00402e32(unaff_EBP + -0x1c,&DAT_00980690);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        uVar1 = *(undefined4 *)(extraout_ECX + 0xcc);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_004031b7(uVar1,3);
        iVar3 = *(int *)(extraout_ECX + 200);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (iVar3 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = (int *)FUN_004113e5(unaff_EBP + 0xc);
        iVar3 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar3 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = (int *)*piVar4;
        iVar3 = (**(code **)(*piVar4 + 0x90))
                          (piVar4,0,0xff,*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x10));
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,piVar4,&DAT_00963de8);
        }
        piVar4 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x1c);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
      }
      if ((DAT_00978364 != 0) && (DAT_00979424 != 0)) {
        FUN_00817f6e(-(uint)(DAT_00979424 != 0) & DAT_00979424 + 4U);
      }
    }
    else if (iVar3 == 0xd) {
      if (-1 < iVar2) {
        FUN_005665b3();
      }
    }
    else if (iVar3 == 0x1b) {
      FUN_005697ac(1,-(uint)(extraout_ECX != 4) & extraout_ECX);
    }
    else {
      if (iVar3 == 0x25) {
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) goto LAB_005711bc;
        }
      }
      else {
        if (iVar3 != 0x27) goto LAB_005711bc;
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar2 + 1;
        }
        if ((*(int *)(extraout_ECX + 0xf0) <= iVar2) ||
           (**(int **)(extraout_ECX + 100 + iVar2 * 4) == 0)) goto LAB_005711bc;
      }
      FUN_005719f2(iVar2);
    }
  }
LAB_005711bc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


