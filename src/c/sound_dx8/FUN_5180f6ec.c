/* FUN_5180f6ec - 0x5180f6ec in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_5180f6ec(void)

{
  HMMIO hmmio;
  MMRESULT MVar1;
  LONG LVar2;
  void *_Dst;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar6 = uRam00000000;
  if (unaff_EBP != -8) {
    uVar6 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0xc);
  }
  uVar7 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 8);
  *(undefined4 *)(unaff_EBP + -0xa4) = 0;
  puVar5 = (undefined4 *)(unaff_EBP + -0xa0);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(unaff_EBP + -0xa0) = 0x204d454d;
  *(undefined4 *)(unaff_EBP + -0x90) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x8c) = uVar7;
  hmmio = mmioOpenA((LPSTR)0x0,(LPMMIOINFO)(unaff_EBP + -0xa4),0x10000);
  *(HMMIO *)(unaff_EBP + -0x20) = hmmio;
  if (hmmio == (HMMIO)0x0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    goto LAB_5180f972;
  }
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(HMMIO *)(unaff_EBP + -0x18) = hmmio;
  MVar1 = mmioDescend(hmmio,(LPMMCKINFO)(unaff_EBP + -0x4c),(MMCKINFO *)0x0,0);
  if (((MVar1 == 0) && (*(int *)(unaff_EBP + -0x4c) == 0x46464952)) &&
     (*(int *)(unaff_EBP + -0x44) == 0x45564157)) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0x20746d66;
    MVar1 = mmioDescend(hmmio,(LPMMCKINFO)(unaff_EBP + -0x38),(MMCKINFO *)(unaff_EBP + -0x4c),0x10);
    if (((MVar1 == 0) && (0xf < *(uint *)(unaff_EBP + -0x34))) &&
       (LVar2 = mmioRead(hmmio,(HPSTR)(unaff_EBP + -0x5c),0x10), LVar2 == 0x10)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_51807cf2(unaff_EBP + -0x14);
      puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
      *puVar5 = DAT_51819ee0;
      puVar5[1] = DAT_51819ee4;
      puVar5[2] = DAT_51819ee8;
      puVar5[3] = DAT_51819eec;
      iVar4 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(iVar4 + 0x10) = DAT_51819e70;
      *(undefined4 *)(iVar4 + 0x14) = DAT_51819e74;
      *(undefined4 *)(iVar4 + 0x18) = DAT_51819e78;
      *(undefined4 *)(iVar4 + 0x1c) = DAT_51819e7c;
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x20) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(short *)(unaff_EBP + -0x5c) == 1) {
        _Dst = (void *)FUN_51809499(*(void **)(unaff_EBP + -0x10),(undefined4 *)&DAT_51819dd0,0x12);
        memcpy(_Dst,(void *)(unaff_EBP + -0x5c),0x10);
        *(undefined2 *)((int)_Dst + 0x10) = 0;
LAB_5180f8bf:
        MVar1 = mmioAscend(*(HMMIO *)(unaff_EBP + -0x20),(LPMMCKINFO)(unaff_EBP + -0x38),0);
        if ((MVar1 != 0) ||
           (LVar2 = mmioSeek(*(HMMIO *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x40) + 4,0),
           LVar2 == -1)) goto LAB_5180f905;
        *(undefined4 *)(unaff_EBP + -0x38) = 0x61746164;
        MVar1 = mmioDescend(*(HMMIO *)(unaff_EBP + -0x20),(LPMMCKINFO)(unaff_EBP + -0x38),
                            (MMCKINFO *)(unaff_EBP + -0x4c),0x10);
        if (MVar1 != 0) goto LAB_5180f905;
        uVar6 = *(undefined4 *)(unaff_EBP + -0x34);
        iVar4 = *(int *)(unaff_EBP + -0x2c);
        **(uint **)(unaff_EBP + 0x10) =
             (uint)(*(int *)(unaff_EBP + -0x34) * 1000) / *(uint *)((int)_Dst + 8);
        FUN_51805b5f(*(void **)(unaff_EBP + 0xc),iVar4,uVar6);
        iVar4 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
        FUN_51810353(iVar4);
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        LVar2 = mmioRead(*(HMMIO *)(unaff_EBP + -0x20),(HPSTR)(unaff_EBP + -0x24),2);
        if (LVar2 == 2) {
          _Dst = (void *)FUN_51809499(*(void **)(unaff_EBP + -0x10),(undefined4 *)&DAT_51819dd0,
                                      *(ushort *)(unaff_EBP + -0x24) + 0x12);
          memcpy(_Dst,(void *)(unaff_EBP + -0x5c),0x10);
          *(undefined2 *)((int)_Dst + 0x10) = *(undefined2 *)(unaff_EBP + -0x24);
          uVar3 = mmioRead(*(HMMIO *)(unaff_EBP + -0x20),(HPSTR)((int)_Dst + 0x12),
                           (uint)*(ushort *)(unaff_EBP + -0x24));
          if (*(ushort *)(unaff_EBP + -0x24) == uVar3) {
            uVar9 = 5;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            iVar4 = FUN_51804b19();
            iVar4 = acmStreamOpen(0,0,_Dst,iVar4 + 0x1c,uVar6,uVar7,uVar8,uVar9);
            if (iVar4 == 0) goto LAB_5180f8bf;
          }
        }
LAB_5180f905:
        iVar4 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_51813012(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      FUN_5180f090((undefined4 *)(unaff_EBP + -0x18));
      goto LAB_5180f972;
    }
  }
  iVar4 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar4 + 4) = 0;
  FUN_5180f090((undefined4 *)(unaff_EBP + -0x18));
LAB_5180f972:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


