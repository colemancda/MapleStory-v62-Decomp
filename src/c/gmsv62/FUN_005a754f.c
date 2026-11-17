/* FUN_005a754f - 0x005a754f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a754f(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int iVar1;
  int iStack_30;
  int *piStack_2c;
  
  FUN_00879bb8();
  piStack_2c = (int *)0x0;
  iStack_30 = 1000;
  FUN_0045af91(0,0,0);
  piStack_2c = (int *)0x0;
  iStack_30 = 0;
  FUN_0047c31f();
  piStack_2c = *(int **)(extraout_ECX + 0x18);
  if (piStack_2c == (int *)0xffffffff) {
    piStack_2c = (int *)0x5a7594;
    FUN_005a7912();
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  else {
    iStack_30 = unaff_EBP + -0x14;
    FUN_004497f5();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_2c = (int *)&DAT_0097812c;
      *(int **)(unaff_EBP + -0x18) = &iStack_30;
      FUN_00679e4e(&iStack_30,0x70e);
      iVar1 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0040263d(iVar1);
      iStack_30 = FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_30 = FUN_004343c5();
      piStack_2c = (int *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_004184ca();
      piStack_2c = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_30 = 0x5a7613;
      piStack_2c = (int *)FUN_00402bc3();
      if ((int)piStack_2c < 0) {
        iStack_30 = 0x5a761e;
        FUN_00878dfb();
      }
      piStack_2c = (int *)0x1;
      iStack_30 = 1000;
      FUN_0045af91(*(undefined4 *)(unaff_EBP + -0x10),1,1000);
      *(undefined4 *)(extraout_ECX + 0x20) = 1;
      *(undefined4 *)(extraout_ECX + 0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_2c = (int *)0x5a7647;
      FUN_00402676();
      piStack_2c = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_2c != (int *)0x0) {
        iStack_30 = 0x5a7658;
        (**(code **)(*piStack_2c + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


