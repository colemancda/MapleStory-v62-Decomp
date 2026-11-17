/* FUN_00718149 - 0x00718149 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00718149(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int *piVar3;
  int iStack_10;
  int iStack_c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 8) & 3;
  if (uVar1 == 0) {
    if ((*(int *)(extraout_ECX + 0xd8) == 0) || (*(int *)(extraout_ECX + 0xb8) == 0)) {
      if ((*(int *)(extraout_ECX + 0xd4) == 0) || (*(int *)(extraout_ECX + 0xb0) == 0)) {
        if ((*(int *)(extraout_ECX + 0xdc) == 0) || (*(int *)(extraout_ECX + 0xc0) == 0))
        goto LAB_00718497;
        *(int **)(unaff_EBP + 8) = &iStack_10;
        goto LAB_0071847d;
      }
      *(int **)(unaff_EBP + 8) = &iStack_10;
      goto LAB_00718452;
    }
    *(int **)(unaff_EBP + 8) = &iStack_10;
LAB_00718427:
    iStack_c = extraout_ECX + 0xd8;
    piVar3 = &iStack_10;
    FUN_0071b874(&iStack_10);
  }
  else if (uVar1 == 1) {
    iStack_c = extraout_ECX + 0xd8;
    iVar2 = extraout_ECX;
    if ((*(int *)(extraout_ECX + 0xd8) != 0) && (*(int *)(extraout_ECX + 0xb8) != 0)) {
      piVar3 = &iStack_10;
      *(int **)(unaff_EBP + 8) = &iStack_10;
      iStack_10 = extraout_ECX;
      FUN_0071b874(&iStack_10);
      FUN_004489f5(piVar3);
      FUN_007188f9();
      iVar2 = extraout_ECX_01;
    }
    iStack_c = extraout_ECX + 0xdc;
    if ((*(int *)(extraout_ECX + 0xdc) != 0) && (*(int *)(extraout_ECX + 0xc0) != 0)) {
      piVar3 = &iStack_10;
      *(int **)(unaff_EBP + 8) = &iStack_10;
      iStack_10 = iVar2;
      FUN_0071b8c2(&iStack_10);
      FUN_004489f5(piVar3);
      FUN_007188f9();
    }
    if (*(int *)(extraout_ECX + 0xb0) == 0) {
      iStack_c = 0x570;
      iStack_10 = 0x7183b6;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iStack_c = 0;
      }
      else {
        iStack_c = 0x7183cb;
        iStack_c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
        iStack_10 = 0x7183d3;
        iStack_10 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
        iStack_c = FUN_0071869f();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_10 = 0x7183f0;
      FUN_0071b82a();
    }
    iStack_c = 0x7183fb;
    FUN_0071585c();
    *(int **)(unaff_EBP + 8) = &iStack_10;
LAB_00718452:
    iStack_c = extraout_ECX + 0xd4;
    piVar3 = &iStack_10;
    FUN_0071b826(&iStack_10);
  }
  else {
    if (uVar1 == 2) {
      iStack_c = extraout_ECX + 0xd4;
      if ((*(int *)(extraout_ECX + 0xd4) != 0) && (*(int *)(extraout_ECX + 0xb0) != 0)) {
        piVar3 = &iStack_10;
        *(int **)(unaff_EBP + 8) = &iStack_10;
        FUN_0071b826(&iStack_10);
        FUN_004489f5(piVar3);
        FUN_007188f9();
      }
      iStack_c = extraout_ECX + 0xdc;
      if ((*(int *)(extraout_ECX + 0xdc) != 0) && (*(int *)(extraout_ECX + 0xc0) != 0)) {
        piVar3 = &iStack_10;
        *(int **)(unaff_EBP + 8) = &iStack_10;
        FUN_0071b8c2(&iStack_10);
        FUN_004489f5(piVar3);
        FUN_007188f9();
      }
      if (*(int *)(extraout_ECX + 0xb8) == 0) {
        iStack_c = 0x84;
        iStack_10 = 0x7182e1;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          iStack_c = 0;
        }
        else {
          iStack_c = 0x7182fa;
          iStack_c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
          iStack_10 = 0x718302;
          iStack_10 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
          iStack_c = FUN_007187d2();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_10 = 0x71831f;
        FUN_0071b878();
      }
      *(int **)(unaff_EBP + 8) = &iStack_10;
      goto LAB_00718427;
    }
    if (uVar1 != 3) goto LAB_00718497;
    iStack_c = extraout_ECX + 0xd8;
    iVar2 = extraout_ECX;
    if ((*(int *)(extraout_ECX + 0xd8) != 0) && (*(int *)(extraout_ECX + 0xb8) != 0)) {
      piVar3 = &iStack_10;
      *(int **)(unaff_EBP + 8) = &iStack_10;
      iStack_10 = extraout_ECX;
      FUN_0071b874(&iStack_10);
      FUN_004489f5(piVar3);
      FUN_007188f9();
      iVar2 = extraout_ECX_00;
    }
    iStack_c = extraout_ECX + 0xd4;
    if ((*(int *)(extraout_ECX + 0xd4) != 0) && (*(int *)(extraout_ECX + 0xb0) != 0)) {
      piVar3 = &iStack_10;
      *(int **)(unaff_EBP + 8) = &iStack_10;
      iStack_10 = iVar2;
      FUN_0071b826(&iStack_10);
      FUN_004489f5(piVar3);
      FUN_007188f9();
    }
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      iStack_c = 0x5d8;
      iStack_10 = 0x718201;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        iStack_c = 0;
      }
      else {
        iStack_c = 0x71821a;
        iStack_c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
        iStack_10 = 0x718222;
        iStack_10 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
        iStack_c = FUN_007184a7();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_10 = 0x71823f;
      FUN_0071b8c6();
    }
    iStack_c = 0x71824a;
    FUN_00714df3();
    *(int **)(unaff_EBP + 8) = &iStack_10;
LAB_0071847d:
    iStack_c = extraout_ECX + 0xdc;
    piVar3 = &iStack_10;
    FUN_0071b8c2(&iStack_10);
  }
  FUN_004489f5(piVar3);
  FUN_007188f9();
LAB_00718497:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


