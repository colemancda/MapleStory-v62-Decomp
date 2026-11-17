/* FUN_00568c7a - 0x00568c7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00568c7a(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00402aba();
  *(undefined4 *)(extraout_ECX + 0x100) = 0;
  piVar1 = (int *)(extraout_ECX + 300);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x128) = 0;
  }
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x120);
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0056aa2c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = (int *)(extraout_ECX + 0x124);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x120) = 0;
  }
  FUN_0056aac3();
  *(undefined4 *)(extraout_ECX + 0x104) = 0;
  *(undefined4 *)(extraout_ECX + 0x108) = 0;
  *(undefined4 *)(extraout_ECX + 0xfc) = 0;
  *(undefined4 *)(extraout_ECX + 0xf4) = 0;
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  if (*(int *)(extraout_ECX + 0x198) != 0) {
    *(undefined4 *)(*(int *)(extraout_ECX + 0x198) + 0xc0) = 0;
  }
  *(undefined4 *)(extraout_ECX + 0xf8) = 0;
  FUN_0060142b(0xf,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00457cda(0);
  FUN_004751b2(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


