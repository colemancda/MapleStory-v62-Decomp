/* FUN_00751502 - 0x00751502 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00751502(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = *(undefined4 *)(extraout_ECX + 0x4a8 + (uint)(0 < *(int *)(unaff_EBP + 0xc)) * 4);
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  iVar3 = *(int *)(unaff_EBP + 8) + 0x6d;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  *(int *)(unaff_EBP + 8) = iVar3;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,10,iVar3,uVar1,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || ((~*(uint *)(unaff_EBP + 0xc) & 1) == 0)) &&
     (*(int *)(unaff_EBP + 0xc) != -1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4b0 + iVar2 * 4);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,0x34,*(undefined4 *)(unaff_EBP + 8),uVar1,
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || ((~*(uint *)(unaff_EBP + 0xc) & 2) == 0)) &&
     (*(int *)(unaff_EBP + 0xc) != -1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4b8 + iVar2 * 4);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,0x5c,*(undefined4 *)(unaff_EBP + 8),uVar1,
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || ((~*(uint *)(unaff_EBP + 0xc) & 4) == 0)) &&
     (*(int *)(unaff_EBP + 0xc) != -1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c0 + iVar2 * 4);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,0x84,*(undefined4 *)(unaff_EBP + 8),uVar1,
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || ((~*(uint *)(unaff_EBP + 0xc) & 8) == 0)) &&
     (*(int *)(unaff_EBP + 0xc) != -1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  uVar1 = *(undefined4 *)(iVar3 + 0x4c8 + iVar2 * 4);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00470739(0xab,*(undefined4 *)(unaff_EBP + 8),uVar1,unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004295f1(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || ((~*(uint *)(unaff_EBP + 0xc) & 0x10) == 0)) &&
     (*(int *)(unaff_EBP + 0xc) != -1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  uVar1 = *(undefined4 *)(iVar3 + 0x4d0 + iVar2 * 4);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00470739(0xc5,*(undefined4 *)(unaff_EBP + 8),uVar1,unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


