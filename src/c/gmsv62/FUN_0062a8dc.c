/* FUN_0062a8dc - 0x0062a8dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0062a8dc(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_d4;
  wchar_t *pwStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  puStack_c0 = (undefined1 *)0x62a903;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_c0 = (undefined1 *)0x62a911;
  FUN_00403191();
  puStack_c0 = (undefined1 *)0x0;
  iStack_c4 = unaff_EBP + -0x88;
  piStack_c8 = (int *)(unaff_EBP + -0x68);
  *(int ***)(unaff_EBP + -0x20) = &piStack_cc;
  pwStack_d0 = u_Etc_QuestCategory_img_0096825c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d4 = (undefined1 *)0x62a932;
  FUN_004033a1();
  pwStack_d0 = (wchar_t *)(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d4 = (undefined1 *)0x62a942;
  FUN_00405a1d();
  puStack_d4 = (undefined1 *)0x62a949;
  FUN_00402660();
  puStack_d4 = (undefined1 *)0x62a950;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c4 = 0x62a95b;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x30) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    puStack_c0 = (undefined1 *)0x62a971;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_c0 = (undefined1 *)0x62a982;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_c0 = (undefined1 *)0x62a992;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_c0 = (undefined1 *)0x62a99d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_c0 = (undefined1 *)0x62a9aa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_c0 = (undefined1 *)0x62a9b5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_c0 = (undefined1 *)0x62a9c5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_c0 = (undefined1 *)0x62a9d0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iVar3 = 0;
    while( true ) {
      FUN_0087a1b0();
      piStack_c8 = (int *)0x62a9fa;
      iStack_c4 = iVar3;
      puStack_c0 = &stack0xffffff48;
      iStack_c4 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_c0;
      piStack_c8 = (int *)0x62aa06;
      FUN_004033a1();
      iStack_c4 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_c8 = (int *)0x62aa16;
      FUN_0040263d();
      piStack_c8 = (int *)0x62aa1d;
      puStack_c0 = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c4 = 0x62aa27;
      puStack_c0 = (undefined1 *)FUN_004343c5();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_c4 = 0x62aa37;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_c0 = (undefined1 *)0x62aa44;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_c0 = (undefined1 *)0x62aa4f;
        FUN_00878dfb();
      }
      pcVar1 = *(char **)(unaff_EBP + -0x10);
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) break;
      puStack_c0 = (undefined1 *)0xffffffff;
      iStack_c4 = 0x62aa6e;
      FUN_004655d4();
      puStack_c0 = (undefined1 *)0x62aa75;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        puStack_c0 = (undefined1 *)0x62aa89;
        FUN_00434e38();
      }
      iVar3 = iVar3 + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (pcVar1 != (char *)0x0) {
      puStack_c0 = (undefined1 *)0x62aaa1;
      FUN_00434e38();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x80);
    if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
      puStack_c0 = (undefined1 *)0x62aac5;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_c0 = (undefined1 *)0x62aad2;
      FUN_00403191();
      puStack_c0 = (undefined1 *)0x0;
      iStack_c4 = unaff_EBP + -0x58;
      piStack_c8 = (int *)(unaff_EBP + -0x78);
      puStack_d4 = (undefined1 *)&piStack_cc;
      *(int ***)(unaff_EBP + -0x20) = &piStack_cc;
      pwStack_d0 = (wchar_t *)0xc46;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_cc = extraout_ECX_00;
      FUN_00679e4e();
      pwStack_d0 = (wchar_t *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_d4 = (undefined1 *)0x62ab06;
      FUN_00405a1d();
      puStack_d4 = (undefined1 *)0x62ab0d;
      FUN_00402660();
      puStack_d4 = (undefined1 *)0x62ab14;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_c4 = 0x62ab1f;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar3 != 0) {
        puStack_c0 = (undefined1 *)0x62ab35;
        iVar3 = FUN_00404b30();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          puStack_c0 = (undefined1 *)0x62ab46;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_c0 = (undefined1 *)0x62ab56;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_c0 = (undefined1 *)0x62ab61;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puStack_c0 = (undefined1 *)0x62ab6e;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_c0 = (undefined1 *)0x62ab79;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_c0 = (undefined1 *)0x62ab86;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_c0 = (undefined1 *)0x62ab91;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        puStack_c0 = (undefined1 *)0x62aba0;
        FUN_00878dfb();
      }
      puStack_c0 = (undefined1 *)0x62abac;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_c0 = (undefined1 *)0x62abb9;
      FUN_004035f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
        puStack_c0 = (undefined1 *)0x62abca;
        (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
      }
      puStack_c0 = (undefined1 *)0x62abd4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          puStack_c0 = (undefined1 *)0x62abea;
          FUN_00878dfb();
        }
        piStack_c8 = *(int **)(unaff_EBP + -0x24);
        puStack_c0 = (undefined1 *)(unaff_EBP + -0x48);
        iStack_c4 = 1;
        piStack_cc = (int *)0x62abfd;
        iVar3 = (**(code **)(*piStack_c8 + 0xc))();
        if (iVar3 != 0) {
          piStack_cc = (int *)0x62ad8d;
          FUN_0062e7b5();
          piStack_cc = (int *)(unaff_EBP + -0x48);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          pwStack_d0 = (wchar_t *)0x62ad9a;
          piStack_cc = (int *)FUN_00402bc3();
          if ((int)piStack_cc < 0) {
            pwStack_d0 = 
            L"䖋㯜웃ﱅ琑謆倈凿謈\xe445쌻䗆׼ٴࢋｐࡑ䖋菬ﱍ㯿瓃謆倈凿樈堁䶋跴㲥\xffff忿摞ඉ"
            ;
            FUN_00878dfb();
          }
          piStack_cc = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (piStack_cc != (int *)0x0) {
            pwStack_d0 = 
            L"䖋㯤웃ﱅ琅謆倈凿謈\xec45䶃￼쌻ٴࢋｐࡑŪ識\xf44dꖍ＼\xffff幟襤\r";
            (**(code **)(*piStack_cc + 8))();
          }
          piStack_cc = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (piStack_cc != (int *)0x0) {
            pwStack_d0 = L"䖋菬ﱍ㯿瓃謆倈凿樈堁䶋跴㲥\xffff忿摞ඉ";
            (**(code **)(*piStack_cc + 8))();
          }
          piStack_cc = *(int **)(unaff_EBP + -0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_cc != (int *)0x0) {
            pwStack_d0 = L"Ū識\xf44dꖍ＼\xffff幟襤\r";
            (**(code **)(*piStack_cc + 8))();
          }
          uVar6 = 1;
          goto LAB_0062addb;
        }
        piStack_cc = (int *)(unaff_EBP + -0x48);
        pwStack_d0 = (wchar_t *)(unaff_EBP + -0x18);
        puStack_d4 = (undefined1 *)0x62ac12;
        FUN_00405a23();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_cc = (int *)0x0;
        }
        else {
          piStack_cc = (int *)0x62ac24;
          piStack_cc = (int *)FUN_00409205();
        }
        pwStack_d0 = L"橙跿蒏";
        iVar4 = FUN_0087b6ab();
        piStack_cc = (int *)0xffffffff;
        pwStack_d0 = (wchar_t *)0x62ac3e;
        puVar5 = (undefined2 *)FUN_005ee789();
        piStack_cc = (int *)0x0;
        pwStack_d0 = (wchar_t *)0x0;
        *puVar5 = (short)iVar4;
        *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_d4;
        FUN_004059fd(unaff_EBP + -0x18);
        iVar3 = unaff_EBP + -0xb8;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_0040263d(iVar3);
        FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_d4 = (undefined1 *)0x62ac77;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x20) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar3 != 0) {
          piStack_cc = (int *)(unaff_EBP + -0x20);
          pwStack_d0 = (wchar_t *)0x62ac8d;
          piStack_cc = (int *)FUN_00404b30();
          if (((int)piStack_cc < 0) && (piStack_cc != (int *)0x80004002)) {
            pwStack_d0 = (wchar_t *)0x62ac9e;
            FUN_00878dfb();
          }
        }
        piStack_cc = (int *)(unaff_EBP + -0xb8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        pwStack_d0 = (wchar_t *)0x62acae;
        piStack_cc = (int *)FUN_00402bc3();
        if ((int)piStack_cc < 0) {
          pwStack_d0 = L"譑\xf04d쒋ࢉ䖋㯰觃졥ٴࢋｐё譖\xe8cfʓ";
          FUN_00878dfb();
        }
        piStack_cc = *(int **)(unaff_EBP + -0x10);
        pwStack_d0 = *(wchar_t **)(unaff_EBP + -0x10);
        *(int ***)(unaff_EBP + -0x38) = &piStack_cc;
        if (pwStack_d0 != (wchar_t *)0x0) {
          puStack_d4 = (undefined1 *)0x62acd1;
          (**(code **)(*(int *)pwStack_d0 + 4))();
        }
        puStack_d4 = (undefined1 *)0x62acd9;
        pwStack_d0 = (wchar_t *)iVar4;
        iVar3 = FUN_0062af6c();
        piVar2 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (iVar3 == 0) break;
        if (piVar2 != (int *)0x0) {
          puStack_c0 = (undefined1 *)0x62acee;
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        puStack_c0 = (undefined1 *)0x62ad0a;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_c0 = (undefined1 *)0x62ad19;
          FUN_00878dfb();
        }
      }
      if (piVar2 != (int *)0x0) {
        puStack_c0 = (undefined1 *)0x62ad28;
        (**(code **)(*piVar2 + 8))();
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_c0 = (undefined1 *)0x62ad44;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_c0 = (undefined1 *)0x62ad4f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        puStack_c0 = (undefined1 *)0x62ad60;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        puStack_c0 = (undefined1 *)0x62ad71;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        puStack_c0 = (undefined1 *)0x62ad82;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      goto LAB_0062ad82;
    }
  }
  FUN_004027eb();
LAB_0062ad82:
  uVar6 = 0;
LAB_0062addb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


