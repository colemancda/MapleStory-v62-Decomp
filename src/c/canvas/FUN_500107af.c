/* FUN_500107af - 0x500107af in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


bool FUN_500107af(int *param_1)

{
  bool bVar1;
  wint_t wVar2;
  uint uVar3;
  wint_t *pwVar4;
  int *piVar5;
  wchar_t *pwVar6;
  int *piVar7;
  wchar_t local_81c [1030];
  wint_t *local_10;
  wchar_t *local_c;
  
  piVar7 = param_1;
  uVar3 = FUN_50007154(param_1);
  if (uVar3 < 0x400) {
    if ((undefined4 *)*piVar7 == (undefined4 *)0x0) {
      pwVar6 = (wchar_t *)0x0;
    }
    else {
      pwVar6 = *(wchar_t **)*piVar7;
    }
    uVar3 = FUN_50007154(piVar7);
    wcsncpy(local_81c,pwVar6,uVar3 + 1);
    param_1 = (int *)0x0;
    pwVar4 = (wint_t *)FUN_500108da(local_81c,piVar7,(uint *)&param_1);
    piVar7 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      do {
        wVar2 = towlower(*pwVar4);
        *pwVar4 = wVar2;
        piVar7 = (int *)((int)piVar7 + 1);
        pwVar4 = pwVar4 + 1;
      } while (piVar7 < param_1);
    }
    bVar1 = FUN_500109f5();
  }
  else {
    FUN_50007154(piVar7);
    local_c = (wchar_t *)FUN_500023f6();
    if ((undefined4 *)*piVar7 == (undefined4 *)0x0) {
      pwVar6 = (wchar_t *)0x0;
    }
    else {
      pwVar6 = *(wchar_t **)*piVar7;
    }
    uVar3 = FUN_50007154(piVar7);
    wcsncpy(local_c,pwVar6,uVar3 + 1);
    piVar5 = (int *)0x0;
    param_1 = (int *)0x0;
    pwVar4 = (wint_t *)FUN_500108da(local_c,piVar7,(uint *)&param_1);
    local_10 = pwVar4;
    if (param_1 != (int *)0x0) {
      do {
        wVar2 = towlower(*pwVar4);
        *pwVar4 = wVar2;
        piVar5 = (int *)((int)piVar5 + 1);
        pwVar4 = pwVar4 + 1;
      } while (piVar5 < param_1);
    }
    bVar1 = FUN_500109f5();
    FUN_5000257e(&DAT_50081f98,(undefined4 *)local_c);
  }
  return bVar1;
}


