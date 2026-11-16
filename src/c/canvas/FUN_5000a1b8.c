/* FUN_5000a1b8 - 0x5000a1b8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __thiscall FUN_5000a1b8(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar5 = param_1 >> 0x10 & 0xff;
  uVar10 = param_1 >> 8 & 0xff;
  uVar11 = param_1 & 0xff;
  iVar1 = *(int *)this + uVar11;
  iVar6 = *(int *)((int)this + 4) + uVar10;
  iVar7 = *(int *)((int)this + 8) + uVar5;
  iVar8 = *(int *)((int)this + 0xc) + (param_1 >> 0x18);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  if (iVar6 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar6;
    if (0xff < iVar6) {
      iVar2 = 0xff;
    }
  }
  if (iVar7 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar7;
    if (0xff < iVar7) {
      iVar3 = 0xff;
    }
  }
  if (iVar8 < 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0xff;
    if (iVar8 < 0x100) {
      iVar12 = iVar8;
    }
  }
  uVar4 = (iVar3 >> 4) << 4 | iVar3 >> 4;
  uVar9 = (iVar1 >> 4) << 4 | iVar1 >> 4;
  uVar13 = (iVar2 >> 4) << 4 | iVar2 >> 4;
  if (*(int *)this + -1 + uVar11 < 0xfe) {
    *(int *)this = ((int)(uVar11 - uVar9) >> 1) + *(int *)this;
  }
  if (iVar6 - 1U < 0xfe) {
    *(int *)((int)this + 4) = ((int)(uVar10 - uVar13) >> 1) + *(int *)((int)this + 4);
  }
  if (iVar7 - 1U < 0xfe) {
    *(int *)((int)this + 8) = ((int)(uVar5 - uVar4) >> 1) + *(int *)((int)this + 8);
  }
  if (iVar8 - 1U < 0xfe) {
    *(int *)((int)this + 0xc) =
         ((int)((param_1 >> 0x18) - ((iVar12 >> 4) << 4 | iVar12 >> 4)) >> 1) +
         *(int *)((int)this + 0xc);
  }
  return ((uVar4 & 0xf8) << 5 | uVar13 & 0xfc) << 3 | uVar9 >> 3 & 0x1f;
}


