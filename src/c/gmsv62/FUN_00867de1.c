/* FUN_00867de1 - 0x00867de1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00867de1(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xcd0);
  uVar1 = *extraout_ECX;
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  uVar1 = *extraout_ECX;
  if (uVar1 < 0x9c) {
    if (uVar1 == 0x9b) {
      piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x2c,0xcd5);
      iVar5 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + -4);
      }
      uVar4 = FUN_0045efbb(iVar5,uVar4);
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      FUN_00414f8b(uVar4);
      iVar5 = *(int *)(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (uVar1 < 0x79) {
        if (uVar1 != 0x78) {
          if (uVar1 == 0x6e) {
            piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x24,0xcd1);
            iVar5 = *piVar3;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (iVar5 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)(iVar5 + -4);
            }
            uVar4 = FUN_0045efbb(iVar5,uVar4);
            puVar2 = *(undefined4 **)(unaff_EBP + 8);
            *puVar2 = 0;
            FUN_00414f8b(uVar4);
            *(undefined4 *)(unaff_EBP + -0x14) = 1;
            iVar5 = *(int *)(unaff_EBP + -0x24);
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          else {
            if (uVar1 == 0x70) {
              piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x20,0xcdc);
              iVar5 = *piVar3;
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              if (iVar5 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar5 + -4);
              }
              uVar4 = FUN_0045efbb(iVar5,uVar4);
              puVar2 = *(undefined4 **)(unaff_EBP + 8);
              *puVar2 = 0;
              FUN_00414f8b(uVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 1;
              goto LAB_0086814a;
            }
            if (uVar1 == 0x72) {
              piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x1c,0xcd3);
              iVar5 = *piVar3;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              if (iVar5 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar5 + -4);
              }
              uVar4 = FUN_0045efbb(iVar5,uVar4);
              puVar2 = *(undefined4 **)(unaff_EBP + 8);
              *puVar2 = 0;
              FUN_00414f8b(uVar4);
              iVar5 = *(int *)(unaff_EBP + -0x1c);
              *(undefined4 *)(unaff_EBP + -0x14) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 1;
            }
            else {
              if (uVar1 != 0x73) goto LAB_0086807d;
              piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x18,0xcd2);
              iVar5 = *piVar3;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (iVar5 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(iVar5 + -4);
              }
              uVar4 = FUN_0045efbb(iVar5,uVar4);
              puVar2 = *(undefined4 **)(unaff_EBP + 8);
              *puVar2 = 0;
              FUN_00414f8b(uVar4);
              iVar5 = *(int *)(unaff_EBP + -0x18);
              *(undefined4 *)(unaff_EBP + -0x14) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 1;
            }
          }
          goto LAB_00868274;
        }
      }
      else if (((uVar1 != 0x7c) && (uVar1 != 0x96)) && (uVar1 != 0x99)) {
LAB_0086807d:
        piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x30,0xcdd);
        iVar5 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + -4);
        }
        uVar4 = FUN_0045efbb(iVar5,uVar4);
        puVar2 = *(undefined4 **)(unaff_EBP + 8);
        *puVar2 = 0;
        FUN_00414f8b(uVar4);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        goto LAB_0086814a;
      }
      piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x28,0xcd4);
      iVar5 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + -4);
      }
      uVar4 = FUN_0045efbb(iVar5,uVar4);
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      *puVar2 = 0;
      FUN_00414f8b(uVar4);
      iVar5 = *(int *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  else if (uVar1 == 0xaa) {
    piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x48,0xcd6);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + -4);
    }
    uVar4 = FUN_0045efbb(iVar5,uVar4);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(uVar4);
    iVar5 = *(int *)(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (uVar1 == 200) {
    piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x44,0xcd7);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + -4);
    }
    uVar4 = FUN_0045efbb(iVar5,uVar4);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(uVar4);
    iVar5 = *(int *)(unaff_EBP + -0x44);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (uVar1 == 0x154) {
LAB_008681a7:
    piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x40,0xcda);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + -4);
    }
    uVar4 = FUN_0045efbb(iVar5,uVar4);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(uVar4);
    iVar5 = *(int *)(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (uVar1 != 0x15e) {
      if (uVar1 == 0x168) {
        piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x38,0xcdb);
        iVar5 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + -4);
        }
        uVar4 = FUN_0045efbb(iVar5,uVar4);
        puVar2 = *(undefined4 **)(unaff_EBP + 8);
        *puVar2 = 0;
        FUN_00414f8b(uVar4);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        if (uVar1 == 0x17c) goto LAB_008681a7;
        if (uVar1 != 500) goto LAB_0086807d;
        piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x34,0xcd9);
        iVar5 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + -4);
        }
        uVar4 = FUN_0045efbb(iVar5,uVar4);
        puVar2 = *(undefined4 **)(unaff_EBP + 8);
        *puVar2 = 0;
        FUN_00414f8b(uVar4);
        *(undefined4 *)(unaff_EBP + -0x14) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
LAB_0086814a:
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      goto LAB_00868297;
    }
    piVar3 = (int *)FUN_00679d22(unaff_EBP + -0x3c,0xcd8);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + -4);
    }
    uVar4 = FUN_0045efbb(iVar5,uVar4);
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(uVar4);
    iVar5 = *(int *)(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
LAB_00868274:
  if (iVar5 != 0) {
    FUN_00434e38(iVar5 + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
LAB_00868297:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


