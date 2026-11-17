/* FUN_0048a68e - 0x0048a68e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a68e(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  piVar4 = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 1000) {
    if (*(int *)(unaff_EBP + 0xc) == 500) {
      FUN_0048aad2(*(undefined4 *)(unaff_EBP + 0x10));
      goto LAB_0048aa27;
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 0x3e9) {
      if ((*(uint *)(unaff_EBP + 0xc) < 300) || (0x130 < *(uint *)(unaff_EBP + 0xc)))
      goto LAB_0048aa17;
      FUN_0074d6fb();
      iVar2 = *(int *)(unaff_EBP + 0x10);
      *(int *)(&DAT_009790f8 + extraout_ECX[0x163] * 4) = iVar2;
      extraout_ECX[0x162] = iVar2 * 4 + 1;
      FUN_008161f1(0);
    }
    if (((0x3e9 < *(uint *)(unaff_EBP + 8)) && (*(uint *)(unaff_EBP + 8) < 0x3ee)) &&
       (*(int *)(unaff_EBP + 0xc) == 0x65)) {
      if ((DAT_009790dc & 1) == 0) {
        DAT_009790dc = DAT_009790dc | 1;
        _DAT_009790c8 = 0;
        FUN_00414edd(&DAT_00978474,0xffffffff);
        FUN_00679d22(&DAT_009790cc,0xf);
        FUN_00679d22(&DAT_009790d0,0x10);
        FUN_00679d22(&DAT_009790d4,0x11);
        FUN_00679d22(&DAT_009790d8,0x12);
        FUN_008796d0(&LAB_0048aa77);
      }
      iVar2 = FUN_00455c59(unaff_EBP + -0x2c);
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_0045e7c2(0);
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar5 = *(int *)(unaff_EBP + 8);
      uVar7 = *(undefined4 *)(iVar2 + 0x3d);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      sVar1 = FUN_0045f084(iVar2 + 0x39,uVar7);
      *(int *)(unaff_EBP + -0x20) = (int)sVar1;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x249);
      uVar7 = *puVar3;
      iVar5 = (iVar5 + -0x3e9) * 4;
      uVar6 = *(undefined4 *)(&DAT_009790c8 + iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x14,uVar7,uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      iVar2 = *(int *)(iVar5 + 0x3e3 + iVar2);
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + -4);
      }
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x24a);
      uVar7 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar2 = FUN_00458df2(*(int *)(unaff_EBP + 8) + -0x3e9,*(undefined4 *)(unaff_EBP + -0x20),4000)
      ;
      FUN_00434e21(unaff_EBP + -0x18,uVar7,4,*(undefined4 *)(&DAT_009790c8 + iVar5),
                   *(int *)(unaff_EBP + -0x1c) + -1,iVar2 * 4 + 0x30);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      iVar2 = *(int *)(unaff_EBP + 8);
      if (iVar2 == 0x3ea) {
        if (*(int *)(unaff_EBP + 0x10) == 0) goto LAB_0048a927;
LAB_0048a932:
        uVar8 = 1;
        uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
LAB_0048a93a:
        FUN_004996b9(uVar6,uVar7,uVar8);
      }
      else {
        if (iVar2 == 0x3eb) {
          iVar2 = *(int *)(unaff_EBP + 0x10);
joined_r0x0048a902:
          if (iVar2 != 0) goto LAB_0048a932;
LAB_0048a927:
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          goto LAB_0048a93a;
        }
        if (iVar2 == 0x3ec) {
          iVar2 = *(int *)(unaff_EBP + 0x10);
          goto joined_r0x0048a902;
        }
        if (iVar2 == 0x3ed) {
          iVar2 = *(int *)(unaff_EBP + 0x10);
          goto joined_r0x0048a902;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    if ((*(int *)(unaff_EBP + 8) == 0x3ef) && (*(int *)(unaff_EBP + 0xc) == 0x65)) {
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        FUN_004996b9(0,0,0);
        goto LAB_0048aa27;
      }
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      uVar7 = *(undefined4 *)(piVar4[0x165] + 0x48c);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x247);
      uVar6 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + 0x10,uVar6,4,uVar7,4000);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x246);
      uVar7 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004996b9(uVar7,*(undefined4 *)(unaff_EBP + 0x10),1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
LAB_0048aa17:
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    (**(code **)(*piVar4 + 0x20))(*(undefined4 *)(unaff_EBP + 8));
  }
LAB_0048aa27:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


