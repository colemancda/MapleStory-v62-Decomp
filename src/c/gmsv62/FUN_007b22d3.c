/* FUN_007b22d3 - 0x007b22d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007b22d3(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 0x10 & 0xff;
  if ((uVar3 == 0x52) && ((param_2 & 0x1000000) == 0)) {
    iVar2 = FUN_004bed04();
    if ((iVar2 == 0) && ((*(uint *)(param_1 + 0x52c) & 0xfffffffe) != 0x12)) {
      iVar2 = FUN_0050d2d6();
      if (iVar2 == 0) {
        FUN_00853bc2(param_1 + 0x2444);
      }
    }
  }
  if (uVar3 == 0x36) {
    uVar3 = 0x2a;
  }
  iVar2 = DAT_00979110 + uVar3 * 4;
  cVar1 = *(char *)(uVar3 + 4 + iVar2);
  if ((((cVar1 != '\0') && (iVar2 = *(int *)(uVar3 + iVar2 + 5), iVar2 != 0)) && (cVar1 == '\x05'))
     && (iVar2 == 0x32)) {
    iVar2 = FUN_004bed04();
    if (iVar2 == 0) {
      iVar2 = FUN_007b3bb4();
      if (iVar2 == 0) {
        iVar2 = FUN_007a3f46();
        if ((iVar2 == 0) && (*(int *)(param_1 + 0x1e64) == 0)) {
          FUN_00853bc2(param_1 + 0x2444);
        }
      }
    }
  }
  return;
}


