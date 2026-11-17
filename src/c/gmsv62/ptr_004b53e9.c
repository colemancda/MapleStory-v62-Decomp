/* ptr_004b53e9 - 0x004b53e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004b53e9(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_0045d247(in_EAX);
  if ((*(byte *)(unaff_EBP + 9) & 1) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x51,*(undefined4 *)(unaff_ESI + 0x55));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 2) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x59,*(undefined4 *)(unaff_ESI + 0x5d));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 4) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x61,*(undefined4 *)(unaff_ESI + 0x65));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 8) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x69,*(undefined4 *)(unaff_ESI + 0x6d));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 0x10) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x71,*(undefined4 *)(unaff_ESI + 0x75));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 0x20) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x79,*(undefined4 *)(unaff_ESI + 0x7d));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 0x40) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x81,*(undefined4 *)(unaff_ESI + 0x85));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 9) & 0x80) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x89,*(undefined4 *)(unaff_ESI + 0x8d));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 10) & 1) != 0) {
    uVar1 = FUN_00413367(unaff_ESI + 0x91,*(undefined4 *)(unaff_ESI + 0x99));
    FUN_00457d37(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 10) & 2) != 0) {
    uVar1 = FUN_0045f084(unaff_ESI + 0x9d,*(undefined4 *)(unaff_ESI + 0xa1));
    FUN_0045d247(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 10) & 4) != 0) {
    uVar1 = FUN_00413367(unaff_ESI + 0xa5,*(undefined4 *)(unaff_ESI + 0xad));
    FUN_00457d37(uVar1);
  }
  if ((*(byte *)(unaff_EBP + 10) & 0x20) != 0) {
    uVar1 = FUN_00413367(unaff_ESI + 0xb1,*(undefined4 *)(unaff_ESI + 0xb9));
    FUN_00457d37(uVar1);
  }
  return;
}


