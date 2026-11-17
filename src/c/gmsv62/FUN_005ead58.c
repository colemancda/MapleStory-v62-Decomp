/* FUN_005ead58 - 0x005ead58 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ead58(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_44;
  int iStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x124);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iStack_28 = 0x5ead7f;
    FUN_00402fa6();
  }
  else {
    if (*(int *)(extraout_ECX + 0xdc) == 0) {
      if (*(int *)(extraout_ECX + 0x7c) == 0) {
        iStack_28 = 0;
        iStack_2c = 0;
        pcStack_30 = (char *)0x0;
        uStack_34 = 0x3e9;
        uStack_38 = 5000;
        iStack_40 = extraout_ECX + 0x80;
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_3c;
        puStack_44 = (undefined1 *)0x5eaef1;
        FUN_00433bdf();
        puStack_44 = (undefined1 *)(extraout_ECX + 0xd4);
        *(int **)(unaff_EBP + -0x20) = &iStack_40;
        FUN_0041160e();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_44;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004059fd(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_0046c293();
      }
      else {
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_2c = 0;
        }
        else {
          iStack_28 = 0x5eada5;
          iStack_2c = FUN_00409205();
        }
        iStack_28 = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        pcStack_30 = (char *)0x5eadb7;
        FUN_00414edd();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        while( true ) {
          iStack_28 = 0;
          iStack_2c = 0;
          pcStack_30 = s__name_00965b88;
          uStack_34 = 0x5eadca;
          iVar1 = FUN_004538dc();
          if (iVar1 < 0) break;
          iStack_28 = 0xffffffff;
          iStack_2c = iVar1 + 5;
          pcStack_30 = (char *)(unaff_EBP + -0x24);
          uStack_34 = 0x5eade6;
          uVar2 = FUN_0045ece0();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
          iStack_2c = 0;
          pcStack_30 = (char *)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          uStack_34 = 0x5eadfb;
          iStack_28 = iVar1;
          FUN_0045ece0();
          iStack_28 = *(int *)(extraout_ECX + 0x98) + 4;
          iStack_2c = unaff_EBP + -0x1c;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          pcStack_30 = (char *)0x5eae14;
          FUN_0045e02d();
          iStack_28 = *(undefined4 *)(unaff_EBP + -0x14);
          iStack_2c = unaff_EBP + -0x18;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          pcStack_30 = (char *)0x5eae26;
          iStack_28 = FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_2c = 0x5eae33;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_28 = 0x5eae3f;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_28 = 0x5eae4b;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_28 = 0x5eae57;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_28 = 0x5eae63;
          FUN_00414ebb();
        }
        iStack_28 = 0;
        iStack_2c = 0;
        pcStack_30 = (char *)0x0;
        uStack_34 = 0x3e9;
        uStack_38 = 5000;
        iStack_40 = extraout_ECX + 0x80;
        *(undefined1 **)(unaff_EBP + -0x24) = auStack_3c;
        puStack_44 = (undefined1 *)0x5eae87;
        FUN_00433bdf();
        puStack_44 = (undefined1 *)&iStack_40;
        *(int **)(unaff_EBP + -0x20) = &iStack_40;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00449780();
        FUN_0043f93c();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_44 = (undefined1 *)0x5eaead;
        uVar2 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_44;
        FUN_00448a17(uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0046c293();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_28 = 0x5eaed0;
        FUN_00414ebb();
      }
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_28 = 0x5eaf2d;
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


