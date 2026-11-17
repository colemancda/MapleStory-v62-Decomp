/* FUN_0072c10b - 0x0072c10b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0072c10b(int param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar1 = FUN_004133f0();
    FUN_0072c85e(*(int *)(param_1 + 0xa4) + iVar3,*(int *)(param_1 + 0xa4) + (uVar1 % 0x24) * 2);
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x48);
  iVar3 = 0;
  do {
    if (*(char *)(*(int *)(param_1 + 0xa4) + 1 + iVar3 * 2) != '\x02') {
      if (iVar3 == param_2) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0xa4) + 1 + iVar3 * 2) = uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x24);
  FUN_008161f1(0);
  return;
}


