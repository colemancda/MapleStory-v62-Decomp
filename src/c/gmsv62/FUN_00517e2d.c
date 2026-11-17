/* FUN_00517e2d - 0x00517e2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00517e2d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uStack_c;
  int *piStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x517e37;
  FUN_00879bb8();
  piStack_8 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_c;
  FUN_00424dbc(unaff_EBP + 8);
  iVar1 = FUN_00517eab();
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_c = piStack_8;
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_c;
    piStack_8 = (int *)uVar2;
    FUN_00424dbc(unaff_EBP + 8);
    iVar1 = FUN_005186a6();
    if (iVar1 != 0) {
      piStack_8 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_8 != (int *)0x0) {
        uStack_c = 0x517e9c;
        (**(code **)(*piStack_8 + 8))();
      }
      uVar2 = 1;
      goto LAB_00517e9f;
    }
  }
  piStack_8 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_8 != (int *)0x0) {
    uStack_c = 0x517e87;
    (**(code **)(*piStack_8 + 8))();
  }
  uVar2 = 0;
LAB_00517e9f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


