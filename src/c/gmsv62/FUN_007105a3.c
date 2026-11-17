/* FUN_007105a3 - 0x007105a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007105a3(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iStack_38 = 0x7105ba;
  iVar1 = FUN_00429303();
  if (iVar1 != 0) {
    if ((*(int *)(DAT_00978368 + 0x2050) == 0) || (*(int *)(iVar1 + 300) != 0)) {
      iStack_38 = 0;
      iStack_3c = 0;
      iStack_40 = DAT_00978368;
      *(int **)(unaff_EBP + -0x14) = &iStack_40;
      FUN_00679e4e(&iStack_40,0xac8);
      FUN_008163ca();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = 1;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      iStack_38 = 0x4ed;
      iStack_3c = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_40 = 0x71075a;
      iStack_38 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_3c = 0x710767;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_38 = 0x710772;
      FUN_00402676();
      iStack_38 = 0x578;
      iStack_3c = 0x710781;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        iStack_38 = 0;
      }
      else {
        iStack_38 = 0x710793;
        iStack_38 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_3c = 0x7107a3;
      FUN_00450382();
      iStack_38 = unaff_EBP + -0x34;
      iStack_3c = 0;
      iStack_40 = 0x73;
      (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))(extraout_ECX,1,0x7c);
      FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x68));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x28) + -0xc);
      }
    }
    else {
      iStack_38 = 0;
      iStack_3c = 0;
      iStack_40 = DAT_00978368;
      *(int **)(unaff_EBP + -0x14) = &iStack_40;
      FUN_00679e4e(&iStack_40,0xac9);
      FUN_008163ca();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      iStack_38 = 0xaca;
      iStack_3c = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      iStack_40 = 0x71062a;
      iStack_38 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_3c = 0x710637;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_38 = 0x710643;
      FUN_00402676();
      iStack_38 = 0x578;
      iStack_3c = 0x710652;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar1 == 0) {
        iStack_38 = 0;
      }
      else {
        iStack_38 = 0x710664;
        iStack_38 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_3c = 0x710675;
      FUN_00450382();
      iStack_38 = unaff_EBP + -0x24;
      iStack_3c = 0;
      iStack_40 = 0x73;
      (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))(extraout_ECX,6,0x5c);
      uVar2 = FUN_00679d86(unaff_EBP + -0x10,0xacb);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00419192(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00402676();
      iVar1 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x14) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00450382(uVar2);
      (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
                (extraout_ECX,7,0x94,0x73,0,unaff_EBP + -0x24);
      FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x70));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


