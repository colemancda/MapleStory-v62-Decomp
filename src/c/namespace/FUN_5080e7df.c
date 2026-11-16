/* FUN_5080e7df - 0x5080e7df in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080e7df(void)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  FUN_5080e090();
  iVar2 = *(int *)(unaff_EBP + 8);
  uStack_74 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa4;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0xffffffff;
  uStack_78 = 0;
  uStack_7c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (*DAT_5081e734)();
  FUN_5080e250();
  (*DAT_5081e734)(0,0,*(undefined4 *)(iVar2 + 0x2c),0xffffffff,&uStack_7c,0x3fffffff,0,0);
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined ***)(unaff_EBP + -0x5c) = &PTR_FUN_50818a80;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5080c79e((void *)(unaff_EBP + -0x5c),&uStack_7c,3,0x80,1,0x80000000,0,0);
  iVar4 = 0;
  pbVar1 = (byte *)FUN_5080cfc5((void *)(unaff_EBP + -0x5c),0,(LPCSTR)0x0,4,0,0,0,0);
  iVar2 = FUN_5080c927((int *)(unaff_EBP + -0x5c));
  pbVar3 = pbVar1 + iVar2;
  for (; pbVar1 < pbVar3; pbVar1 = pbVar1 + 1) {
    iVar4 = iVar4 + (uint)*pbVar1;
  }
  *(undefined ***)(unaff_EBP + -0x5c) = &PTR_FUN_50818a80;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_5080c740((void *)(unaff_EBP + -0x5c));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_5080fbb9((int *)(unaff_EBP + -0x2c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


